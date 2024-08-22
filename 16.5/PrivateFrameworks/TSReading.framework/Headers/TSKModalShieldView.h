// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSKMODALSHIELDVIEW_H
#define TSKMODALSHIELDVIEW_H

@class UIView;
@protocol TSKModalShieldDelegate;



@interface TSKModalShieldView : UIView

@property (nonatomic) NSObject<TSKModalShieldDelegate> *delegate; // ivar: mDelegate


-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;


@end


#endif