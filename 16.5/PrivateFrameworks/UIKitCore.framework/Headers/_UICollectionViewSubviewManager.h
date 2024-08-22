// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UICOLLECTIONVIEWSUBVIEWMANAGER_H
#define _UICOLLECTIONVIEWSUBVIEWMANAGER_H

@class NSMutableDictionary;
@protocol _UICollectionViewSubviewManagerDelegate;

#import <Foundation/Foundation.h>


@interface _UICollectionViewSubviewManager : NSObject {
    NSMutableDictionary *_cells;
    NSMutableDictionary *_supplementaries;
    NSMutableDictionary *_decorations;
    BOOL _indexPathValidationEnabled;
    id<_UICollectionViewSubviewManagerDelegate> *_delegate;
}




-(id)description;
-(id)init;


@end


#endif