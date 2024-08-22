// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIVISUALEFFECTDIFFERENCEENGINE_H
#define _UIVISUALEFFECTDIFFERENCEENGINE_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface _UIVisualEffectDifferenceEngine : NSObject {
    NSInteger _sourceCount;
    NSInteger _destinationCount;
    NSInteger _prefixCount;
    NSInteger _suffixCount;
    NSInteger _innerSourceCount;
    NSInteger _innerDestinationCount;
    *NSInteger _mergeTable;
    NSArray *_merged;
}


@property (copy, nonatomic) NSArray *destination; // ivar: _destination
@property (readonly, copy, nonatomic) NSArray *merged;
@property (copy, nonatomic) NSArray *source; // ivar: _source


-(id)describeMergeTable;
-(id)description;
-(id)mergeSource:(id)arg0 andDestination:(id)arg1 ;
-(void)_calculate;
-(void)_calculateLCSSTable;
-(void)_calculateMerge;
-(void)_calculatePrefixAndSuffix;
-(void)_reset;
-(void)dealloc;


@end


#endif