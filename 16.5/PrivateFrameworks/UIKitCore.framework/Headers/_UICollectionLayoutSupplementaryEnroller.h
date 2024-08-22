// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UICOLLECTIONLAYOUTSUPPLEMENTARYENROLLER_H
#define _UICOLLECTIONLAYOUTSUPPLEMENTARYENROLLER_H

@class NSMutableOrderedSet, NSMutableSet, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface _UICollectionLayoutSupplementaryEnroller : NSObject {
    NSMutableOrderedSet *_enrollmentIdentifiers;
    NSMutableSet *_uncommittedEnrollmentIdentifiers;
    NSMutableDictionary *_enrollmentsDict;
    NSMutableDictionary *_kindEnrollmentsDict;
}




-(id)description;
-(id)init;


@end


#endif