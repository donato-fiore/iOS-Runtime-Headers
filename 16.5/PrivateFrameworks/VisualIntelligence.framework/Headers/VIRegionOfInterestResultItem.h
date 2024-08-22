// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VIREGIONOFINTERESTRESULTITEM_H
#define VIREGIONOFINTERESTRESULTITEM_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "VIObjectCategory.h"
#import "VIObjectKnowledge.h"
#import "VIOntologyNode.h"
#import "VIThirdPartyObject.h"

@interface VIRegionOfInterestResultItem : NSObject <NSCopying>



@property (readonly, nonatomic) NSString *domain; // ivar: _domain
@property (readonly, nonatomic) VIObjectCategory *objectCategory;
@property (readonly, nonatomic) VIObjectKnowledge *objectKnowledge; // ivar: _objectKnowledge
@property (readonly, nonatomic) VIOntologyNode *ontologyNode; // ivar: _ontologyNode
@property (readonly, nonatomic) VIThirdPartyObject *thirdPartyObject; // ivar: _thirdPartyObject


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithDomain:(id)arg0 thirdPartyObject:(id)arg1 ontologyNode:(id)arg2 objectKnowledge:(id)arg3 ;


@end


#endif