// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UICOMPOUNDOBJECTMAPKEY_H
#define _UICOMPOUNDOBJECTMAPKEY_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface _UICompoundObjectMapKey : NSObject <NSCopying>

 {
    id *_object;
    NSString *_property;
}




+(id)keyWithObject:(id)arg0 andProperty:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;


@end


#endif