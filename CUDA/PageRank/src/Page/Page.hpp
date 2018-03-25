/*
 * Page.h
 *
 * Created on: March 26, 2018
 * 		Author: ahmedsamir
 */

struct Page{
    bool dangling_node;

    int in_links_count;
    int out_links_count;

    int start_idx;
    int end_idx;

    Page() {
        dangling_node = false;
        in_links_count = out_links_count = 0;
        start_idx = end_idx = -1;
    }
};
