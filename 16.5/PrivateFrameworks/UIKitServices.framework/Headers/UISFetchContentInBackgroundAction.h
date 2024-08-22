// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UISFETCHCONTENTINBACKGROUNDACTION_H
#define UISFETCHCONTENTINBACKGROUNDACTION_H

@class BSAction;



@interface UISFetchContentInBackgroundAction : BSAction



-(NSInteger)UIActionType;
-(id)initWithHandler:(id)arg0 ;
-(id)initWithInfo:(id)arg0 timeout:(CGFloat)arg1 forResponseOnQueue:(id)arg2 withHandler:(id)arg3 ;
-(void)sendResponse:(id)arg0 ;


@end


#endif