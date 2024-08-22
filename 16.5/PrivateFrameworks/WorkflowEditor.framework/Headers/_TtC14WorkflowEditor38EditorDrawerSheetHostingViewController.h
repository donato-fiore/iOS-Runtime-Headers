// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC14WORKFLOWEDITOR38EDITORDRAWERSHEETHOSTINGVIEWCONTROLLER_H
#define _TTC14WORKFLOWEDITOR38EDITORDRAWERSHEETHOSTINGVIEWCONTROLLER_H

@class UIViewController;
@protocol WFActionDrawerScrollViewObserver;



@interface _TtC14WorkflowEditor38EditorDrawerSheetHostingViewController : UIViewController <WFActionDrawerScrollViewObserver>

 {
    ? rootView;
    ? test;
    ? hostingViewController;
    ? scrollViewDelegate;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)activeScrollViewDidChange;
-(void)loadView;
-(void)viewDidAppear:(BOOL)arg0 ;


@end


#endif