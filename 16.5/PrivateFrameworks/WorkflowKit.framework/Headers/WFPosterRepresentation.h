// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFPOSTERREPRESENTATION_H
#define WFPOSTERREPRESENTATION_H

@class NSUUID, NSString;
@protocol NSSecureCoding, WFNaming;

#import <Foundation/Foundation.h>


@interface WFPosterRepresentation : NSObject <NSSecureCoding, WFNaming>



@property (readonly, nonatomic) NSUUID *UUID; // ivar: _UUID
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, copy, nonatomic) NSString *providerBundleIdentifier; // ivar: _providerBundleIdentifier
@property (readonly, copy, nonatomic) NSString *wfName;


+(BOOL)supportsSecureCoding;
+(id)defaultPoster;
+(id)posterWithSerializedRepresentation:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUUID:(id)arg0 name:(id)arg1 providerBundleIdentifier:(id)arg2 ;
-(id)serializedRepresentation;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif