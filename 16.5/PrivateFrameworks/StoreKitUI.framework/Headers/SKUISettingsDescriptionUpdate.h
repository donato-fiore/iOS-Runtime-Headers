// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUISETTINGSDESCRIPTIONUPDATE_H
#define SKUISETTINGSDESCRIPTIONUPDATE_H

@class NSArray, NSIndexSet;

#import <Foundation/Foundation.h>


@interface SKUISettingsDescriptionUpdate : NSObject

@property (retain, nonatomic) NSArray *indexPaths; // ivar: _indexPaths
@property (retain, nonatomic) NSIndexSet *indexSet; // ivar: _indexSet
@property (readonly, nonatomic) NSInteger updateType; // ivar: _updateType


-(id)initWithUpdateType:(NSInteger)arg0 ;


@end


#endif