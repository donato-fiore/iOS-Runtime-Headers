// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTCV8VIDEOSUI17HOSTEDUISEARCHBAR11COORDINATOR_H
#define _TTCV8VIDEOSUI17HOSTEDUISEARCHBAR11COORDINATOR_H

@protocol UISearchBarDelegate, UITextFieldDelegate;

#import <Foundation/Foundation.h>


@interface _TtCV8VideosUI17HostedUISearchBar11Coordinator : NSObject <UISearchBarDelegate, UITextFieldDelegate>

 {
    ? _text;
    ? _isSearching;
    ? _searchButtonClicked;
    ? recordMetricsForSubmit;
}




-(BOOL)textFieldShouldClear:(id)arg0 ;
-(id)init;
-(void)searchBar:(id)arg0 textDidChange:(id)arg1 ;
-(void)searchBarCancelButtonClicked:(id)arg0 ;
-(void)searchBarSearchButtonClicked:(id)arg0 ;
-(void)searchBarTextDidBeginEditing:(id)arg0 ;
-(void)searchBarTextDidEndEditing:(id)arg0 ;


@end


#endif