#include "PmergeMe.hpp"

bool	str_isdigit(char *str)
{
	int	i = 0;

	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (false);
		i++;
	}
	return (true);
}

void	ft_sort_pair(std::vector<pair_t> &cont, std::vector<pair_t>::iterator beg, std::vector<pair_t>::iterator end)
{
	if (beg == end)
		return ;
	if (beg->first > beg->second)
	{
		((beg)->first ^= (beg->second));
		((beg)->second ^= (beg->first));
		((beg)->first ^= (beg->second));
	}
	ft_sort_pair(cont, beg + 1, end);
}

void	insertion_sort_pairs(std::vector<pair_t> &arr, int start, int end)
{
	for (int i = start + 1; i <= end; ++i) {
		pair_t key = arr[i];
		int j = i - 1;
		while (j >= start && arr[j].second < key.second) {
			arr[j + 1] = arr[j];
			--j;
		}
		arr[j + 1] = key;
	}
}

void insert(std::vector<pair_t>& arr, int start, int end) {
	if (end <= start) {
		return;
	}
	insert(arr, start, end - 1);
	if (arr[end].second > arr[end - 1].second) {
		std::swap(arr[end], arr[end - 1]);
		insertion_sort_pairs(arr, start, end - 1);
	}
}

void sort_by_larger_value(std::vector<pair_t>& arr) {
	insert(arr, 0, arr.size() - 1);
	std::reverse(arr.begin(), arr.end());
}

void	ft_build_cont(std::vector<pair_t> &pair_cont, std::vector<int> &cont, int last_value)
{
	for ( std::vector<pair_t>::iterator beg = pair_cont.begin(); beg != pair_cont.end(); beg++)
	{
		cont.push_back(beg->second);
	}
	for ( std::vector<pair_t>::iterator beg = pair_cont.begin(); beg != pair_cont.end(); beg++)
	{
		cont.insert(lower_bound(cont.begin(), cont.end(), beg->first), beg->first);
	}
	if (last_value >= 0)
	{
		cont.insert(lower_bound(cont.begin(), cont.end(), last_value), last_value);
	}
}

void	ft_print_pair_vec(std::vector<pair_t> &pair_cont)
{
	for(std::vector<pair_t>::iterator beg = pair_cont.begin(); beg != pair_cont.end(); beg++)
	{
		std::cout << "{ " << beg->first << ", " << beg->second << " }";
	}
	std::cout << std::endl;
}

void	ft_merge_sort(std::vector<int> &cont)
{
	std::vector<pair_t>	pair_cont;
	int	last_value = -1;	

	if (cont.size() % 2)
	{
		last_value = cont.back();
		cont.pop_back();
	}
	std::vector<int>::iterator	beg = cont.begin();
	std::vector<int>::iterator	end = cont.end();
	while (beg != end)
	{
		pair_cont.push_back(std::make_pair<int,int>(*beg, *(beg + 1)));
		beg++;
		beg++;
	}
	ft_sort_pair(pair_cont, pair_cont.begin(), pair_cont.end());
	sort_by_larger_value(pair_cont);
	cont.clear();
	ft_build_cont(pair_cont, cont, last_value);
}

void	ft_sort_pair(std::deque<pair_t> &cont, std::deque<pair_t>::iterator beg, std::deque<pair_t>::iterator end)
{
	if (beg == end)
		return ;
	if (beg->first > beg->second)
	{
		((beg)->first ^= (beg->second));
		((beg)->second ^= (beg->first));
		((beg)->first ^= (beg->second));
	}
	ft_sort_pair(cont, beg + 1, end);
}

void	insertion_sort_pairs(std::deque<pair_t> &arr, int start, int end)
{
	for (int i = start + 1; i <= end; ++i) {
		pair_t key = arr[i];
		int j = i - 1;
		while (j >= start && arr[j].second < key.second) {
			arr[j + 1] = arr[j];
			--j;
		}
		arr[j + 1] = key;
	}
}

void insert(std::deque<pair_t>& arr, int start, int end) {
	if (end <= start) {
		return;
	}
	insert(arr, start, end - 1);
	if (arr[end].second > arr[end - 1].second) {
		std::swap(arr[end], arr[end - 1]);
		insertion_sort_pairs(arr, start, end - 1);
	}
}

void sort_by_larger_value(std::deque<pair_t>& arr) {
	insert(arr, 0, arr.size() - 1);
	std::reverse(arr.begin(), arr.end());
}

void	ft_build_cont(std::deque<pair_t> &pair_cont, std::deque<int> &cont, int last_value)
{
	for ( std::deque<pair_t>::iterator beg = pair_cont.begin(); beg != pair_cont.end(); beg++)
	{
		cont.push_back(beg->second);
	}
	for ( std::deque<pair_t>::iterator beg = pair_cont.begin(); beg != pair_cont.end(); beg++)
	{
		cont.insert(lower_bound(cont.begin(), cont.end(), beg->first), beg->first);
	}
	if (last_value >= 0)
	{
		cont.insert(lower_bound(cont.begin(), cont.end(), last_value), last_value);
	}
}

void	ft_print_pair_vec(std::deque<pair_t> &pair_cont)
{
	for(std::deque<pair_t>::iterator beg = pair_cont.begin(); beg != pair_cont.end(); beg++)
	{
		std::cout << "{ " << beg->first << ", " << beg->second << " }";
	}
	std::cout << std::endl;
}

void	ft_merge_sort(std::deque<int> &cont)
{
	std::deque<pair_t>	pair_cont;
	int	last_value = -1;	

	if (cont.size() % 2)
	{
		last_value = cont.back();
		cont.pop_back();
	}
	std::deque<int>::iterator	beg = cont.begin();
	std::deque<int>::iterator	end = cont.end();
	while (beg != end)
	{
		pair_cont.push_back(std::make_pair<int,int>(*beg, *(beg + 1)));
		beg++;
		beg++;
	}
	ft_sort_pair(pair_cont, pair_cont.begin(), pair_cont.end());
	sort_by_larger_value(pair_cont);
	cont.clear();
	ft_build_cont(pair_cont, cont, last_value);
}
