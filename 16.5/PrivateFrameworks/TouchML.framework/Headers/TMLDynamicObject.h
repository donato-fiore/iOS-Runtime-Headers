// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TMLDYNAMICOBJECT_H
#define TMLDYNAMICOBJECT_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface TMLDynamicObject : NSObject

@property (readonly, nonatomic) NSMutableDictionary *properties; // ivar: _properties


+(BOOL)resolveInstanceMethod:(SEL)arg0 ;
+(id)dynamicPropertyType:(id)arg0 ;
-(id)init;


@end


#endif