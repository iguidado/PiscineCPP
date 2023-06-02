#include <vector>
#include <algorithm>
#include <ctime>
#include <cstring>
#include <cstdlib>
#include <sstream>
#include <deque>
#include <iostream>
#include <unistd.h>

typedef std::pair<int,int> pair_t;

bool	str_isdigit(char *str);

;
void	ft_sort_pair(std::vector<pair_t> &cont, std::vector<pair_t>::iterator beg, std::vector<pair_t>::iterator end);
void	insertion_sort_pairs(std::vector<pair_t> &arr, int start, int end);
void insert(std::vector<pair_t>& arr, int start, int end);
void sort_by_larger_value(std::vector<pair_t>& arr) ;
void	ft_build_cont(std::vector<pair_t> &pair_cont, std::vector<int> &cont);
void	ft_merge_sort(std::vector<int> &cont);

void	ft_print_cont(std::vector<int>& cont);

void	ft_sort_pair(std::deque<pair_t> &cont, std::deque<pair_t>::iterator beg, std::deque<pair_t>::iterator end);
void	insertion_sort_pairs(std::deque<pair_t> &arr, int start, int end);
void insert(std::deque<pair_t>& arr, int start, int end);
void sort_by_larger_value(std::deque<pair_t>& arr) ;
void	ft_build_cont(std::deque<pair_t> &pair_cont, std::deque<int> &cont);
void	ft_merge_sort(std::deque<int> &cont);

void	ft_print_cont(std::deque<int>& cont);
