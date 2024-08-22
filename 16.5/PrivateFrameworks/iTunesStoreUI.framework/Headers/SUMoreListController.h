// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SUMORELISTCONTROLLER_H
#define SUMORELISTCONTROLLER_H

@class UIMoreListController, UITabBarItem;



@interface SUMoreListController : UIMoreListController {
    UITabBarItem *_tabBarItem;
}




-(NSInteger)ITunesStoreUIBarStyle;
-(NSUInteger)supportedInterfaceOrientations;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)tabBarItem;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)_badgeDidChangeNotification:(id)arg0 ;
-(void)_reloadPreviewOverlayVisibility;
-(void)dealloc;
-(void)didMoveToParentViewController:(id)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif