// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBSRELAUNCHACTION_H
#define SBSRELAUNCHACTION_H

@class BSAction, NSString, NSURL;



@interface SBSRelaunchAction : BSAction

@property (readonly, nonatomic) NSUInteger options;
@property (readonly, copy, nonatomic) NSString *reason;
@property (readonly, retain, nonatomic) NSURL *targetURL;


+(id)actionWithReason:(id)arg0 options:(NSUInteger)arg1 targetURL:(id)arg2 ;
-(id)initWithReason:(id)arg0 options:(NSUInteger)arg1 targetURL:(id)arg2 ;


@end


#endif