// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TTSSYNTHESISPROVIDERCOMPONENTRECORD_H
#define TTSSYNTHESISPROVIDERCOMPONENTRECORD_H

@class NSString, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface TTSSynthesisProviderComponentRecord : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (nonatomic) AudioComponentDescription componentDescription; // ivar: _componentDescription
@property (retain, nonatomic) NSString *containerBundleIdentifier; // ivar: _containerBundleIdentifier
@property (nonatomic) BOOL isFirstParty; // ivar: _isFirstParty
@property (retain, nonatomic) NSString *version; // ivar: _version
@property (retain, nonatomic) NSArray *voices; // ivar: _voices


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif