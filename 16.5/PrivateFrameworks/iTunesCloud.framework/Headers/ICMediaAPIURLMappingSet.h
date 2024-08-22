// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICMEDIAAPIURLMAPPINGSET_H
#define ICMEDIAAPIURLMAPPINGSET_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface ICMediaAPIURLMappingSet : NSObject {
    NSArray *_responsePayload;
}


@property (readonly, copy, nonatomic) NSArray *responsePayload;


-(id)initWithResponsePayload:(id)arg0 ;
-(id)mappingsForFeatureName:(id)arg0 ;
-(void)enumerateMappingsUsingBlock:(id)arg0 ;


@end


#endif