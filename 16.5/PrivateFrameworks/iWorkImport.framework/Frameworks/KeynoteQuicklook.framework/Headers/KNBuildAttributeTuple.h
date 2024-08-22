// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef KNBUILDATTRIBUTETUPLE_H
#define KNBUILDATTRIBUTETUPLE_H

@class TSPObject, NSUUID, NSString;
@protocol NSCopying;


#import "KNBuildChunkIdentifier.h"
#import "KNBuild.h"
#import "KNBuildChunk.h"
#import "KNBuildAttributeValue.h"

@interface KNBuildAttributeTuple : TSPObject <NSCopying>

 {
    KNBuildChunkIdentifier *_buildChunkIdentifier;
    NSUUID *_buildId;
    BOOL _definedAttributeValue;
    BOOL _definedBuildChunkIdentifier;
    BOOL _definedBuildId;
}


@property (readonly, nonatomic) KNBuild *build;
@property (readonly, nonatomic) KNBuildChunk *chunk;
@property (readonly, nonatomic) BOOL isBuildTuple;
@property (readonly, nonatomic) BOOL isChunkTuple;
@property (readonly, nonatomic) NSString *property; // ivar: _property
@property (readonly, nonatomic) KNBuildAttributeValue *value; // ivar: _attributeValue


+(id)tupleForBuild:(id)arg0 property:(id)arg1 value:(id)arg2 ;
+(id)tupleWithChunk:(id)arg0 property:(id)arg1 value:(id)arg2 ;
+(id)tupleWithChunk:(id)arg0 referent:(NSUInteger)arg1 ;
-(BOOL)isValidForSlide:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithBuild:(id)arg0 chunk:(id)arg1 property:(id)arg2 value:(id)arg3 ;
-(id)initWithBuild:(id)arg0 property:(id)arg1 value:(id)arg2 ;
-(id)initWithChunk:(id)arg0 property:(id)arg1 value:(id)arg2 ;


@end


#endif