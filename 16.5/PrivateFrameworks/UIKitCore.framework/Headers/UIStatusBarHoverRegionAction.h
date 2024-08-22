// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UISTATUSBARHOVERREGIONACTION_H
#define UISTATUSBARHOVERREGIONACTION_H

@class BSAction;



@interface UIStatusBarHoverRegionAction : BSAction

@property (readonly, nonatomic) NSInteger region;


-(NSInteger)UIActionType;
-(id)initWithRegion:(NSInteger)arg0 ;
-(id)keyDescriptionForSetting:(NSUInteger)arg0 ;


@end


#endif