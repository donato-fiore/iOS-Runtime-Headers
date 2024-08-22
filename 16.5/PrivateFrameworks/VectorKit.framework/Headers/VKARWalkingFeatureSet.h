// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VKARWALKINGFEATURESET_H
#define VKARWALKINGFEATURESET_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface VKARWalkingFeatureSet : NSObject {
    _retain_ptr<NSArray<VKARWalkingFeature *> *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc> _features;
    NSInteger _state;
    _retain_ptr<NSMutableSet<id<VKARWalkingFeatureSetObserver>> *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc> _observers;
    mutex _mutex;
}


@property (readonly, nonatomic) NSArray *features;
@property (nonatomic) NSInteger state;
@property (readonly, nonatomic) NSUInteger uniqueIdentifier; // ivar: _uniqueIdentifier


-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)initWithFeatures:(id)arg0 ;
-(void)_stateWillChangeFromState:(NSInteger)arg0 nextState:(NSInteger)arg1 ;
-(void)addObserver:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;


@end


#endif