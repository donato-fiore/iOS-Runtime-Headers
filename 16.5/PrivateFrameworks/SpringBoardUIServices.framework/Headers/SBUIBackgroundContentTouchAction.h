// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBUIBACKGROUNDCONTENTTOUCHACTION_H
#define SBUIBACKGROUNDCONTENTTOUCHACTION_H

@class BSAction;



@interface SBUIBackgroundContentTouchAction : BSAction

@property (readonly, nonatomic) CGPoint location;


-(id)initWithLocation:(struct CGPoint )arg0 ;
-(id)keyDescriptionForSetting:(NSUInteger)arg0 ;
-(id)valueDescriptionForFlag:(NSInteger)arg0 object:(id)arg1 ofSetting:(NSUInteger)arg2 ;


@end


#endif