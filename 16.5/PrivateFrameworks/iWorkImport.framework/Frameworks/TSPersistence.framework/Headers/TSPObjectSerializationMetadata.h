// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSPOBJECTSERIALIZATIONMETADATA_H
#define TSPOBJECTSERIALIZATIONMETADATA_H

@class NSArray;


#import "TSPObject.h"
#import "TSPDataMetadataMap.h"

@interface TSPObjectSerializationMetadata : TSPObject {
    ObjectSerializationMetadata _message;
    TSPDataMetadataMap *_identifierToDataMetadataMap;
}


@property (copy, nonatomic) NSArray *dataReferences; // ivar: _dataReferences


-(*void)message;
-(NSInteger)tsp_identifier;
-(id)dataMetadataForDataIdentifier:(NSInteger)arg0 ;
-(id)initWithContext:(id)arg0 ;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)saveToArchiver:(id)arg0 ;
-(void)setDataMetadata:(id)arg0 forDataIdentifier:(NSInteger)arg1 ;


@end


#endif