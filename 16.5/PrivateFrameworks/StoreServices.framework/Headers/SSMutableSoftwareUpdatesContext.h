// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SSMUTABLESOFTWAREUPDATESCONTEXT_H
#define SSMUTABLESOFTWAREUPDATESCONTEXT_H

@class NSString, NSArray;
@protocol SSXPCCoding;


#import "SSSoftwareUpdatesContext.h"

@interface SSMutableSoftwareUpdatesContext : SSSoftwareUpdatesContext <SSXPCCoding>



@property (copy, nonatomic) NSString *clientIdentifierHeader;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isForced) BOOL forced;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *softwareTypes;
@property (readonly) Class superclass;


-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)arg0 ;


@end


#endif