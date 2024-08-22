// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UINIBENCODER_H
#define UINIBENCODER_H

@class NSCoder, NSMutableData;



@interface UINibEncoder : NSCoder {
    *__CFDictionary objectsToObjectIDs;
    *__CFDictionary objectIDsToObjects;
    *__CFArray values;
    *__CFSet encodedObjects;
    NSMutableData *data;
    *__CFDictionary replacements;
    unsigned int nextObjectID;
    ? recursiveState;
    *__CFSet objectsReplacedWithNil;
    *__CFArray encodedOrderedObjects;
    *__CFSet objectsUniquedByValue;
}


@property id *delegate; // ivar: delegate


+(BOOL)archiveRootObject:(id)arg0 toFile:(id)arg1 ;
+(id)archivedDataWithRootObject:(id)arg0 ;
-(BOOL)allowsKeyedCoding;
-(BOOL)object:(id)arg0 encodesAsMemberAndWithCoderOfClass:(Class)arg1 ;
-(BOOL)object:(id)arg0 encodesWithCoderFromClass:(Class)arg1 ;
-(BOOL)previouslyCodedObject:(id)arg0 ;
-(BOOL)shouldUniqueObjectByValue:(id)arg0 ;
-(Class)encodedClassForObject:(id)arg0 ;
-(NSInteger)versionForClassName:(id)arg0 ;
-(id)assignObjectIDForObject:(id)arg0 ;
-(id)encodedClassNameForClass:(Class)arg0 ;
-(id)encodedClassNameForObject:(id)arg0 ;
-(id)initForWritingWithMutableData:(id)arg0 ;
-(id)nextGenericKey;
-(id)objectIDForObject:(id)arg0 ;
-(id)replacementObjectForObject:(id)arg0 forKey:(id)arg1 ;
-(unsigned int)systemVersion;
-(void)appendValue:(id)arg0 ;
-(void)dealloc;
-(void)encodeArrayOfCGFloats:(*CGFloat)arg0 count:(NSInteger)arg1 forKey:(id)arg2 ;
-(void)encodeArrayOfDoubles:(*CGFloat)arg0 count:(NSInteger)arg1 forKey:(id)arg2 ;
-(void)encodeArrayOfFloats:(*float)arg0 count:(NSInteger)arg1 forKey:(id)arg2 ;
-(void)encodeArrayOfObjCType:(char *)arg0 count:(NSUInteger)arg1 at:(*void)arg2 ;
-(void)encodeBool:(BOOL)arg0 forKey:(id)arg1 ;
-(void)encodeBycopyObject:(id)arg0 ;
-(void)encodeByrefObject:(id)arg0 ;
-(void)encodeBytes:(*void)arg0 length:(NSUInteger)arg1 ;
-(void)encodeBytes:(char *)arg0 length:(NSUInteger)arg1 forKey:(id)arg2 ;
-(void)encodeCGAffineTransform:(struct CGAffineTransform )arg0 forKey:(id)arg1 ;
-(void)encodeCGPoint:(struct CGPoint )arg0 forKey:(id)arg1 ;
-(void)encodeCGRect:(struct CGRect )arg0 forKey:(id)arg1 ;
-(void)encodeCGSize:(struct CGSize )arg0 forKey:(id)arg1 ;
-(void)encodeConditionalObject:(id)arg0 ;
-(void)encodeConditionalObject:(id)arg0 forKey:(id)arg1 ;
-(void)encodeDouble:(CGFloat)arg0 forKey:(id)arg1 ;
-(void)encodeFloat:(float)arg0 forKey:(id)arg1 ;
-(void)encodeInt32:(int)arg0 forKey:(id)arg1 ;
-(void)encodeInt64:(NSInteger)arg0 forKey:(id)arg1 ;
-(void)encodeInt:(int)arg0 forKey:(id)arg1 ;
-(void)encodeInteger:(NSInteger)arg0 forKey:(id)arg1 ;
-(void)encodeObject:(id)arg0 ;
-(void)encodeObject:(id)arg0 forKey:(id)arg1 ;
-(void)encodeRootObject:(id)arg0 ;
-(void)encodeUIEdgeInsets:(struct UIEdgeInsets )arg0 forKey:(id)arg1 ;
-(void)encodeValueOfObjCType:(char *)arg0 at:(*void)arg1 ;
-(void)encodeValuesOfObjCTypes:(char *)arg0 ;
-(void)finishEncoding;
-(void)serializeArray:(id)arg0 ;
-(void)serializeDictionary:(id)arg0 ;
-(void)serializeObject:(id)arg0 ;
-(void)serializeSet:(id)arg0 ;


@end


#endif