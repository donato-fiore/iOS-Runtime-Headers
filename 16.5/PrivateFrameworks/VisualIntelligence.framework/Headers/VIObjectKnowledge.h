// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VIOBJECTKNOWLEDGE_H
#define VIOBJECTKNOWLEDGE_H

@class NSString, NSArray, NSData, NSURL;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface VIObjectKnowledge : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *detailedDescription; // ivar: _detailedDescription
@property (readonly, copy, nonatomic) NSString *knowledgeGraphID; // ivar: _knowledgeGraphID
@property (readonly, copy, nonatomic) NSArray *knowledgeProperties; // ivar: _knowledgeProperties
@property (readonly, copy, nonatomic) NSData *serializedDomainResponse; // ivar: _serializedDomainResponse
@property (readonly, nonatomic) NSInteger serializedDomainType; // ivar: _serializedDomainType
@property (readonly, copy, nonatomic) NSString *shortDescription; // ivar: _shortDescription
@property (readonly, nonatomic) float thumbnailAspectRatio; // ivar: _thumbnailAspectRatio
@property (readonly, copy, nonatomic) NSURL *thumbnailURL; // ivar: _thumbnailURL
@property (readonly, copy, nonatomic) NSString *title; // ivar: _title
@property (readonly, copy, nonatomic) NSURL *webURL; // ivar: _webURL


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithKnowledgeGraphID:(id)arg0 title:(id)arg1 thumbnailURL:(id)arg2 thumbnailAspectRatio:(float)arg3 shortDescription:(id)arg4 detailedDescription:(id)arg5 webURL:(id)arg6 knowledgeProperties:(id)arg7 serializedDomainType:(NSInteger)arg8 serializedDomainResponse:(id)arg9 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif