// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TRCOMPANIONAUTHOPERATION_H
#define TRCOMPANIONAUTHOPERATION_H

@class ACAccount, NSString, NSSet;


#import "TROperation.h"

@interface TRCompanionAuthOperation : TROperation

@property (retain, nonatomic) ACAccount *account; // ivar: _account
@property (nonatomic) BOOL isCLIMode; // ivar: _isCLIMode
@property (retain, nonatomic) NSString *rawPassword; // ivar: _rawPassword
@property (nonatomic) BOOL shouldUseAIDA; // ivar: _shouldUseAIDA
@property (retain, nonatomic) NSSet *targetedServices; // ivar: _targetedServices


-(void)_handleResponse:(id)arg0 ;
-(void)execute;


@end


#endif