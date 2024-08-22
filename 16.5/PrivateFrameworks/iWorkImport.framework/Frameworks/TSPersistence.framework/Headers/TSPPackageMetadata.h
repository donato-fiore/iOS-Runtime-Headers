// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSPPACKAGEMETADATA_H
#define TSPPACKAGEMETADATA_H



#import "TSPObject.h"
#import "TSPDataMetadataMap.h"

@interface TSPPackageMetadata : TSPObject {
    PackageMetadata _message;
    TSPDataMetadataMap *_identifierToDataMetadataMap;
}




-(*void)message;
-(NSInteger)tsp_identifier;
-(id)dataMetadataForDataIdentifier:(NSInteger)arg0 ;
-(id)initWithContext:(id)arg0 ;
-(id)packageLocator;
-(id)packageMetadataDataInfosWithDecryptionKey:(id)arg0 ;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)saveToArchiver:(id)arg0 ;
-(void)setDataMetadata:(id)arg0 forDataIdentifier:(NSInteger)arg1 ;


@end


#endif