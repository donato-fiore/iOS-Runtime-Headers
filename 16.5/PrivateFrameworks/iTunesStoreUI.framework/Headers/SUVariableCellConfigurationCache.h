// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SUVARIABLECELLCONFIGURATIONCACHE_H
#define SUVARIABLECELLCONFIGURATIONCACHE_H

@class NSMutableDictionary, NSArray;

#import <Foundation/Foundation.h>


@interface SUVariableCellConfigurationCache : NSObject {
    NSMutableDictionary *_caches;
    CGFloat _tableHeight;
}


@property (readonly, nonatomic) NSArray *caches;
@property (retain, nonatomic) id *cellContext; // ivar: _cellContext


-(id)cacheForClass:(Class)arg0 ;
-(id)initWithTableHeight:(CGFloat)arg0 ;
-(void)dealloc;
-(void)reset;
-(void)resetLayoutCaches;


@end


#endif