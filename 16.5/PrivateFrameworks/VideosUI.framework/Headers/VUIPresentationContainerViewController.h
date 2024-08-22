// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VUIPRESENTATIONCONTAINERVIEWCONTROLLER_H
#define VUIPRESENTATIONCONTAINERVIEWCONTROLLER_H

@class UIViewController, NSString;
@protocol UIGestureRecognizerDelegate;



@interface VUIPresentationContainerViewController : UIViewController <UIGestureRecognizerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(void)loadView;
-(void)tapped;
-(void)viewDidLayoutSubviews;


@end


#endif