// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TIMETRICDESCRIPTORREGISTRY_H
#define TIMETRICDESCRIPTORREGISTRY_H

@class NSMutableDictionary, NSMutableSet, NSLock, NSDictionary, NSSet;

#import <Foundation/Foundation.h>


@interface TIMetricDescriptorRegistry : NSObject {
    NSMutableDictionary *_metricDescriptors;
    NSMutableSet *_invalidMetricNames;
    NSLock *_lock;
}


@property (retain, nonatomic) NSDictionary *config; // ivar: _config
@property (readonly, nonatomic) NSSet *invalidMetricNames;
@property (nonatomic) BOOL loaded; // ivar: _loaded
@property (readonly, nonatomic) NSDictionary *metricDescriptors;


+(id)registry;
+(id)registryWithConfig:(id)arg0 ;
+(id)registryWithDescriptors:(id)arg0 andInvalidMetricNames:(id)arg1 ;
-(id)allMetricDescriptors;
-(id)contextFromError:(id)arg0 ;
-(id)initWithConfig:(id)arg0 ;
-(id)initWithDescriptors:(id)arg0 andInvalidMetricNames:(id)arg1 ;
-(id)metricDescriptorWithName:(id)arg0 ;
-(id)valueFromError:(id)arg0 forKey:(id)arg1 ;
-(void)_loadMetricDescriptors;
-(void)loadMetricDescriptorsIfNecessary;


@end


#endif