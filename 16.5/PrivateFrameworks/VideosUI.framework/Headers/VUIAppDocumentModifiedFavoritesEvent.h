// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VUIAPPDOCUMENTMODIFIEDFAVORITESEVENT_H
#define VUIAPPDOCUMENTMODIFIEDFAVORITESEVENT_H

@class NSSet;
@protocol NSCopying;


#import "VUIAppDocumentUpdateEvent.h"

@interface VUIAppDocumentModifiedFavoritesEvent : VUIAppDocumentUpdateEvent <NSCopying>



@property (copy, nonatomic) NSSet *addedEntityIDs; // ivar: _addedEntityIDs
@property (copy, nonatomic) NSSet *removedEntityIDs; // ivar: _removedEntityIDs


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)coalescedEvent:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithAction:(NSUInteger)arg0 entityID:(id)arg1 ;
-(id)initWithAddedEntityIDs:(id)arg0 removedEntityIDs:(id)arg1 ;
-(id)initWithDescriptor:(id)arg0 ;


@end


#endif