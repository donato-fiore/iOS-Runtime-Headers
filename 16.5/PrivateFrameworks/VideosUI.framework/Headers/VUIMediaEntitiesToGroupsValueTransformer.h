// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VUIMEDIAENTITIESTOGROUPSVALUETRANSFORMER_H
#define VUIMEDIAENTITIESTOGROUPSVALUETRANSFORMER_H

@class NSValueTransformer, NSString;



@interface VUIMediaEntitiesToGroupsValueTransformer : NSValueTransformer

@property (copy, nonatomic) id *groupsSortComparator; // ivar: _groupsSortComparator
@property (copy, nonatomic) NSString *identifierKeyPath; // ivar: _identifierKeyPath
@property (nonatomic) BOOL performDefaultSort; // ivar: _performDefaultSort
@property (copy, nonatomic) NSString *sortIndexKeyPath; // ivar: _sortIndexKeyPath


+(BOOL)allowsReverseTransformation;
+(Class)transformedValueClass;
-(id)init;
-(id)initWithIdentifierKeyPath:(id)arg0 ;
-(id)transformedValue:(id)arg0 ;


@end


#endif