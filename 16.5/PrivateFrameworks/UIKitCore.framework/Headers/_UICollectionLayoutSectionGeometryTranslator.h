// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UICOLLECTIONLAYOUTSECTIONGEOMETRYTRANSLATOR_H
#define _UICOLLECTIONLAYOUTSECTIONGEOMETRYTRANSLATOR_H


#import <Foundation/Foundation.h>


@interface _UICollectionLayoutSectionGeometryTranslator : NSObject {
    NSUInteger _layoutAxis;
    BOOL _layoutRTL;
    CGPoint _contentFrameOffset;
    NSDirectionalEdgeInsets _sectionInsets;
    CGRect _contentFrame;
    CGRect _effectiveFrame;
    CGSize _primaryContentSize;
    CGSize _contentSizeIncludingSupplementaries;
    CGRect _primaryContentFrame;
}




-(id)description;


@end


#endif