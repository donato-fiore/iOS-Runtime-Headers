// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UISCOMPATIBILITYCONTEXT_H
#define UISCOMPATIBILITYCONTEXT_H

@class NSString, NSArray;
@protocol BSXPCSecureCoding, NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>


@interface UISCompatibilityContext : NSObject <BSXPCSecureCoding, NSCopying, NSMutableCopying>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSArray *supportedDisplaySizes; // ivar: _supportedDisplaySizes


+(BOOL)supportsBSXPCSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithBSXPCCoder:(id)arg0 ;
-(id)initWithSupportedDisplaySizes:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)encodeWithBSXPCCoder:(id)arg0 ;


@end


#endif