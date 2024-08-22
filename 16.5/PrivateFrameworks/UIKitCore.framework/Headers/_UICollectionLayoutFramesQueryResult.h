// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UICOLLECTIONLAYOUTFRAMESQUERYRESULT_H
#define _UICOLLECTIONLAYOUTFRAMESQUERYRESULT_H

@class NSCollectionLayoutItem, NSUUID;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface _UICollectionLayoutFramesQueryResult : NSObject <NSCopying>

 {
    BOOL _isFrameAdjustedForPinning;
    NSInteger _index;
    NSInteger _zIndex;
    NSInteger _resultKind;
    NSCollectionLayoutItem *_item;
    NSUUID *_supplementaryEnrollmentIdentifier;
    NSInteger _auxillaryKind;
    CGRect _frame;
}




-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;


@end


#endif