/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@class NSArray;

@interface _HKCompoundFilter : _HKFilter {
    unsigned int _compoundType;
    NSArray *_subfilters;
}

@property(readonly) unsigned int compoundType;
@property(readonly) NSArray * subfilters;

+ (id)filterWithSubfilters:(id)arg1 compoundType:(unsigned int)arg2;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (BOOL)acceptsDataObject:(id)arg1;
- (unsigned int)compoundType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)predicateWithHealthDaemon:(id)arg1;
- (id)subfilters;

@end