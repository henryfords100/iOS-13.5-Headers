/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:17 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsNaturalLanguage.framework/DataDetectorsNaturalLanguage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DataDetectorsNaturalLanguage/DataDetectorsNaturalLanguage-Structs.h>
#import <DataDetectorsNaturalLanguage/IPFeature.h>

@class RKText, NSArray, NSString;

@interface IPFeatureSentence : IPFeature {

	BOOL _hasCheckedEventVocabularyKeyword;
	BOOL _hasCheckedEventVocabularyIgnoreDateKeyword;
	RKText* _responseKitSentence;
	NSArray* _fragments;
	NSString* _languageID;
	unsigned long long _storedPolarity;
	NSString* _storedEventVocabularyRejectionKeyword;
	NSString* _storedEventVocabularyIgnoreDateKeyword;

}

@property (copy) NSString * languageID;                                                    //@synthesize languageID=_languageID - In the implementation block
@property (retain) RKText * responseKitSentence;                                           //@synthesize responseKitSentence=_responseKitSentence - In the implementation block
@property (assign) unsigned long long storedPolarity;                                      //@synthesize storedPolarity=_storedPolarity - In the implementation block
@property (copy) NSString * storedEventVocabularyRejectionKeyword;                         //@synthesize storedEventVocabularyRejectionKeyword=_storedEventVocabularyRejectionKeyword - In the implementation block
@property (copy) NSString * storedEventVocabularyIgnoreDateKeyword;                        //@synthesize storedEventVocabularyIgnoreDateKeyword=_storedEventVocabularyIgnoreDateKeyword - In the implementation block
@property (copy) NSArray * fragments;                                                      //@synthesize fragments=_fragments - In the implementation block
@property (copy,readonly) NSString * eventVocabularyRejectionKeyword; 
@property (copy,readonly) NSString * eventVocabularyIgnoreDateKeyword; 
@property (getter=isQuoteAttributionLine,readonly) BOOL quoteAttributionLine; 
@property (readonly) unsigned long long clusterType; 
@property (readonly) unsigned long long polarity; 
+(id)bestLanguageIDFromText:(id)arg1 ;
+(id)eventVocabularyRejectionKeywordInString:(id)arg1 languageID:(id)arg2 ;
+(id)eventVocabularyIgnoreDateKeywordInString:(id)arg1 languageID:(id)arg2 ;
+(id)humanReadableFeaturePolarity:(unsigned long long)arg1 ;
+(id)regexSetForType:(id)arg1 languageID:(id)arg2 ;
+(id)buildRegexForType:(id)arg1 languageID:(id)arg2 ;
+(id)eventVocabularyRegexForType:(id)arg1 languageID:(id)arg2 ;
+(id)eventVocabularyRejectionRegexForLanguageID:(id)arg1 ;
+(id)eventVocabularyIgnoreDateRegexForLanguageID:(id)arg1 ;
+(id)eventVocabularySubjectTitleRegexForLanguageID:(id)arg1 ;
+(id)eventVocabularyPositiveRegexForLanguageID:(id)arg1 ;
+(id)eventVocabularySubjectTitleInString:(id)arg1 languageID:(id)arg2 ;
+(unsigned long long)numberOfMatchesForEventVocabularySubjectTitleInString:(id)arg1 languageID:(id)arg2 ;
-(id)description;
-(unsigned long long)clusterType;
-(NSArray *)fragments;
-(NSString *)languageID;
-(void)setLanguageID:(NSString *)arg1 ;
-(unsigned long long)polarity;
-(BOOL)isQuoteAttributionLine;
-(NSString *)eventVocabularyIgnoreDateKeyword;
-(NSString *)eventVocabularyRejectionKeyword;
-(unsigned long long)polarityForRange:(NSRange)arg1 confidence:(double*)arg2 ;
-(void)setResponseKitSentence:(RKText *)arg1 ;
-(void)setStoredPolarity:(unsigned long long)arg1 ;
-(unsigned long long)storedPolarity;
-(id)descriptionForFragment:(id)arg1 ;
-(void)checkEventVocabularyKeywordsIfNeeded;
-(NSString *)storedEventVocabularyRejectionKeyword;
-(void)setStoredEventVocabularyIgnoreDateKeyword:(NSString *)arg1 ;
-(NSString *)storedEventVocabularyIgnoreDateKeyword;
-(void)setStoredEventVocabularyRejectionKeyword:(NSString *)arg1 ;
-(id)initWithLanguageID:(id)arg1 responseKitSentence:(id)arg2 ;
-(void)addFragment:(id)arg1 ;
-(unsigned long long)polarityForRange:(NSRange)arg1 ;
-(id)descriptionForFragmentAtIndex:(unsigned long long)arg1 ;
-(RKText *)responseKitSentence;
-(void)setFragments:(NSArray *)arg1 ;
@end

