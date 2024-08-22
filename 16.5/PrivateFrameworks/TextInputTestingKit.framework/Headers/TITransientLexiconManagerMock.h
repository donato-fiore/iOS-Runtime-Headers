// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TITRANSIENTLEXICONMANAGERMOCK_H
#define TITRANSIENTLEXICONMANAGERMOCK_H

@class NSDictionary, NSArray;

#import <Foundation/Foundation.h>


@interface TITransientLexiconManagerMock : NSObject {
    NSDictionary *_contactCollection;
    *_LXLexicon _namedEntityLexiconRef;
    *_LXLexicon _namedEntityPhraseLexiconRef;
}


@property (nonatomic) int acceptedCount; // ivar: _acceptedCount
@property (readonly, nonatomic) NSArray *observers; // ivar: _observers
@property (nonatomic) int offeredCount; // ivar: _offeredCount
@property (nonatomic, getter=isSupplementalLexiconSearchEnabled) BOOL supplementalLexiconSearchEnabled; // ivar: _supplementalLexiconSearchEnabled


+(id)getEntries:(struct _LXLexicon *)arg0 ;
+(id)tokenizeEntity:(id)arg0 ;
-(BOOL)searchForWord:(id)arg0 ;
-(BOOL)searchForWordCaseInsensitive:(id)arg0 ;
-(BOOL)searchHelper:(struct _LXLexicon *)arg0 forWord:(struct __CFString *)arg1 caseSensitive:(BOOL)arg2 ;
-(id)addContactObserver:(SEL)arg0 ;
-(id)ensureSupplementalLexicons;
-(id)init;
-(id)initWithTransientData:(id)arg0 namedEntities:(id)arg1 ;
-(id)supplementalLexicons;
-(struct _LXLexicon *)namedEntityLexicon;
-(struct _LXLexicon *)namedEntityPhraseLexicon;
-(void)addEntry:(id)arg0 toLexicon:(struct _LXLexicon *)arg1 ;
-(void)dealloc;
-(void)debugLogEntities;
-(void)getOnce:(id)arg0 ;
-(void)loadLexicons;
-(void)provideFeedbackForString:(id)arg0 type:(unsigned char)arg1 style:(unsigned char)arg2 ;
-(void)removeContactObserver:(id)arg0 ;
-(void)setNewContactCollection:(id)arg0 ;
-(void)unload;


@end


#endif