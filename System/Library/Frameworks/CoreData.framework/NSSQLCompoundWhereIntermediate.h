/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:06 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSSQLWhereIntermediate.h>

@class NSMutableArray, NSSQLEntity, NSArray;

@interface NSSQLCompoundWhereIntermediate : NSSQLWhereIntermediate {

	NSMutableArray* _subclauses;
	NSSQLEntity* _disambiguatingEntity;
	NSArray* _disambiguationKeypath;
	BOOL _disambiguationKeypathHasToMany;

}
-(void)dealloc;
-(id)generateSQLStringInContext:(id)arg1 ;
-(id)initWithPredicate:(id)arg1 inScope:(id)arg2 inContext:(id)arg3 ;
-(id)disambiguatingEntity;
-(id)disambiguationKeypath;
-(BOOL)disambiguationKeypathHasToMany;
-(id)_generateMulticlauseStringInContext:(id)arg1 ;
-(BOOL)isOrScoped;
-(void)setDisambiguatingEntity:(id)arg1 withKeypath:(id)arg2 hasToMany:(BOOL)arg3 ;
@end

