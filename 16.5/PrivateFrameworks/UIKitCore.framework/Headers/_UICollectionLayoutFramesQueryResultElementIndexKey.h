// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UICOLLECTIONLAYOUTFRAMESQUERYRESULTELEMENTINDEXKEY_H
#define _UICOLLECTIONLAYOUTFRAMESQUERYRESULTELEMENTINDEXKEY_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface _UICollectionLayoutFramesQueryResultElementIndexKey : NSObject <NSCopying>

 {
    NSString *_element;
    NSInteger _index;
}




-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif