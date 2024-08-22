// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIOACTIONORIGINCONTEXT_H
#define _UIOACTIONORIGINCONTEXT_H

@class NSString;
@protocol NSSecureCoding, NSMutableCopying;

#import <Foundation/Foundation.h>


@interface _UIOActionOriginContext : NSObject <NSSecureCoding, NSMutableCopying>



@property (readonly, nonatomic) unsigned int contextId; // ivar: _contextId
@property (readonly, copy, nonatomic) NSString *displayIdentifier; // ivar: _displayIdentifier
@property (readonly, nonatomic) NSUInteger layerId; // ivar: _layerId
@property (readonly, nonatomic) CGPoint layerReferencePoint; // ivar: _layerReferencePoint
@property (readonly, copy, nonatomic) NSString *sceneIdentity; // ivar: _sceneIdentity


+(BOOL)supportsSecureCoding;
+(id)defaultOriginContext;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(struct CGPoint )translatedReferencePointForDestinationView:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif