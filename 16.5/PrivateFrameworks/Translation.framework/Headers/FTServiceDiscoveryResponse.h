// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FTSERVICEDISCOVERYRESPONSE_H
#define FTSERVICEDISCOVERYRESPONSE_H

@class NSMutableDictionary, NSData, NSString, NSArray;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>


@interface FTServiceDiscoveryResponse : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *ServiceDiscoveryResponse _root;
}


@property (readonly, nonatomic) int error_code;
@property (readonly, nonatomic) NSString *error_str;
@property (readonly, nonatomic) NSString *session_id;
@property (readonly, nonatomic) NSArray *zk_node;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct ServiceDiscoveryResponse *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct ServiceDiscoveryResponse *)arg1 verify:(BOOL)arg2 ;
-(id)zk_node_objectAtIndex:(NSUInteger)arg0 ;
-(struct Offset<siri::speech::schema_fb::ServiceDiscoveryResponse> )addObjectToBuffer:(*void)arg0 ;
-(void)zk_node_enumerateObjectsUsingBlock:(id)arg0 ;


@end


#endif