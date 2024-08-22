// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKERROR_H
#define SKERROR_H


#import <Foundation/Foundation.h>


@interface SKError : NSObject



+(id)errorWithCode:(NSInteger)arg0 disks:(id)arg1 userInfo:(id)arg2 ;
+(id)errorWithCode:(NSInteger)arg0 underlyingError:(id)arg1 ;
+(id)errorWithCode:(NSInteger)arg0 userInfo:(id)arg1 ;
+(id)frameworkBundle;
+(id)localizedDescriptionForCode:(NSInteger)arg0 ;


@end


#endif