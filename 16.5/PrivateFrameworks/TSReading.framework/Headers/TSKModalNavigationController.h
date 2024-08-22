// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSKMODALNAVIGATIONCONTROLLER_H
#define TSKMODALNAVIGATIONCONTROLLER_H

@class UINavigationController, UIView;



@interface TSKModalNavigationController : UINavigationController {
    UIView *mTopSeparator;
}


@property (nonatomic) BOOL isFullscreenViewController; // ivar: mIsFullscreenViewController
@property (nonatomic) BOOL showTopSeparator; // ivar: mShowTopSeparator


-(NSInteger)positionForBar:(id)arg0 ;
-(id)initWithRootViewController:(id)arg0 ;
-(void)dealloc;
-(void)layoutViews;
-(void)p_statusBarWillChange:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif