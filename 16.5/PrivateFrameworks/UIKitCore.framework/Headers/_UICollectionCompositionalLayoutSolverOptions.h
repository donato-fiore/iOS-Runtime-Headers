// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UICOLLECTIONCOMPOSITIONALLAYOUTSOLVEROPTIONS_H
#define _UICOLLECTIONCOMPOSITIONALLAYOUTSOLVEROPTIONS_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface _UICollectionCompositionalLayoutSolverOptions : NSObject {
    BOOL _layoutRTL;
    BOOL _roundsToScreenScale;
    CGFloat _interSectionSpacing;
    Class _layoutAttributesClass;
    Class _invalidationContextClass;
    id *_invalidationHandler;
    NSArray *_globalSupplementaryItems;
    id *_decorationRegistrationHandler;
    id *_sectionSolveErrorHandler;
}






@end


#endif