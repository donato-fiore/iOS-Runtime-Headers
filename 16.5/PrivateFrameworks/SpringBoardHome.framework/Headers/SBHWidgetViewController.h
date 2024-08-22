// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBHWIDGETVIEWCONTROLLER_H
#define SBHWIDGETVIEWCONTROLLER_H

@class CHUISWidgetHostViewController, NSMutableArray;
@protocol SBHWidgetViewControllerDelegate;



@interface SBHWidgetViewController : CHUISWidgetHostViewController {
    NSMutableArray *_preventBackgroundingAssertions;
    BOOL _isInvalidatingBackgroundAssertion;
    BOOL _pendingStaticMode;
    BOOL _isInvalidated;
}


@property (weak, nonatomic) NSObject<SBHWidgetViewControllerDelegate> *delegate;


-(id)acquirePreventSceneBackgroundingAssertionForReason:(id)arg0 ;
-(void)_invalidateBackgroundingAssertion:(id)arg0 ;
-(void)invalidate;
-(void)setPresentationMode:(NSUInteger)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif