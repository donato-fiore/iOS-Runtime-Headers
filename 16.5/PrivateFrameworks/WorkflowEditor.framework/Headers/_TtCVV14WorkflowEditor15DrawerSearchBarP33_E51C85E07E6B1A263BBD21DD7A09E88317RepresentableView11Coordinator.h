// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTCVV14WORKFLOWEDITOR15DRAWERSEARCHBARP33_E51C85E07E6B1A263BBD21DD7A09E88317REPRESENTABLEVIEW11COORDINATOR_H
#define _TTCVV14WORKFLOWEDITOR15DRAWERSEARCHBARP33_E51C85E07E6B1A263BBD21DD7A09E88317REPRESENTABLEVIEW11COORDINATOR_H

@protocol UISearchBarDelegate;

#import <Foundation/Foundation.h>


@interface _TtCVV14WorkflowEditor15DrawerSearchBarP33_E51C85E07E6B1A263BBD21DD7A09E88317RepresentableView11Coordinator : NSObject <UISearchBarDelegate>

 {
    ? owner;
}




-(id)init;
-(void)searchBar:(id)arg0 textDidChange:(id)arg1 ;
-(void)searchBarCancelButtonClicked:(id)arg0 ;
-(void)searchBarSearchButtonClicked:(id)arg0 ;
-(void)searchBarTextDidBeginEditing:(id)arg0 ;
-(void)searchBarTextDidEndEditing:(id)arg0 ;


@end


#endif