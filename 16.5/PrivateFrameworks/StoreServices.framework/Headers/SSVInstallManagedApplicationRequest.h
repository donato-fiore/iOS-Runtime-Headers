// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SSVINSTALLMANAGEDAPPLICATIONREQUEST_H
#define SSVINSTALLMANAGEDAPPLICATIONREQUEST_H

@class NSString, NSNumber;
@protocol SSXPCCoding;


#import "SSRequest.h"

@interface SSVInstallManagedApplicationRequest : SSRequest <SSXPCCoding>



@property (copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (copy, nonatomic) NSString *bundleVersion; // ivar: _bundleVersion
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSNumber *externalVersionIdentifier; // ivar: _externalVersionIdentifier
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *itemIdentifier; // ivar: _itemIdentifier
@property (nonatomic) BOOL skipDownloads; // ivar: _skipDownloads
@property (readonly) Class superclass;


-(id)copyXPCEncoding;
-(id)initWithItemIdentifer:(id)arg0 externalVersionIdentifier:(id)arg1 bundleIdentifier:(id)arg2 bundleVersion:(id)arg3 ;
-(id)initWithItemIdentifer:(id)arg0 externalVersionIdentifier:(id)arg1 bundleIdentifier:(id)arg2 bundleVersion:(id)arg3 skipDownloads:(BOOL)arg4 ;
-(id)initWithXPCEncoding:(id)arg0 ;
-(void)startWithDetailedResponseBlock:(id)arg0 ;
-(void)startWithMetadataResponseBlock:(id)arg0 ;
-(void)startWithResponseBlock:(id)arg0 ;


@end


#endif