// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STLOCATIONSTATUSDOMAINDISPLAYNAMETRANSFORMERPROVIDER_H
#define STLOCATIONSTATUSDOMAINDISPLAYNAMETRANSFORMERPROVIDER_H

@class NSMutableDictionary, NSArray;
@protocol STStatusDomainClientDataTransformerProviding;

#import <Foundation/Foundation.h>


@interface STLocationStatusDomainDisplayNameTransformerProvider : NSObject <STStatusDomainClientDataTransformerProviding>

 {
    NSMutableDictionary *_entityResolversByLocalization;
    NSMutableDictionary *_transformersByLocalization;
}


@property (copy, nonatomic) NSArray *dynamicAttributions; // ivar: _dynamicAttributions


-(id)dataTransformerForClient:(id)arg0 ;
-(id)init;


@end


#endif