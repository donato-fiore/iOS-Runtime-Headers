// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ISCREATEACCOUNTPROMPTOPERATION_H
#define ISCREATEACCOUNTPROMPTOPERATION_H

@class NSString;


#import "ISOperation.h"

@interface ISCreateAccountPromptOperation : ISOperation

@property (retain, nonatomic) NSString *reason; // ivar: _reason
@property (nonatomic) NSInteger responseType; // ivar: _responseType


-(BOOL)_hasActiveICloudAccount;
-(NSInteger)_mapCorrectSelectedButtonWithDialog:(id)arg0 ;
-(id)_newCreateAccountDialog;
-(id)init;
-(id)initWithReason:(id)arg0 ;
-(void)run;


@end


#endif