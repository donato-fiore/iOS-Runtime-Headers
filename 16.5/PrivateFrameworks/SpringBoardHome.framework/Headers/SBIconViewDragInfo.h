// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBICONVIEWDRAGINFO_H
#define SBICONVIEWDRAGINFO_H

@class NSString, NSArray, NSURL;
@protocol NSSecureCoding, BSDescriptionProviding;

#import <Foundation/Foundation.h>


@interface SBIconViewDragInfo : NSObject <NSSecureCoding, BSDescriptionProviding>



@property (copy, nonatomic) NSString *activeCustomIconDataSourceUniqueIdentifier; // ivar: _activeCustomIconDataSourceUniqueIdentifier
@property (copy, nonatomic) NSString *applicationBundleIdentifier; // ivar: _applicationBundleIdentifier
@property (copy, nonatomic) NSArray *customIconDataSourceConfigurations; // ivar: _customIconDataSourceConfigurations
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSUInteger gridSizeClass; // ivar: _gridSizeClass
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSURL *launchURL; // ivar: _launchURL
@property (nonatomic) NSInteger startLocation; // ivar: _startLocation
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *uniqueIdentifier; // ivar: _uniqueIdentifier


+(BOOL)supportsSecureCoding;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif