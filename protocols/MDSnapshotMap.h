/* Generated by RuntimeBrowser.
 */

@protocol MDSnapshotMap <NSObject>

@required

- (void)addCustomFeatureDataSource:(id <VKCustomFeatureDataSource>)arg1;
- (NSArray *)customFeatureDataSources;
- (BOOL)isShowingNoDataPlaceholders;
- (unsigned char)labelScaleFactor;
- (BOOL)localizeLabels;
- (void)removeCustomFeatureDataSource:(id <VKCustomFeatureDataSource>)arg1;
- (void)setCustomFeatureDataSources:(NSArray *)arg1;
- (void)setLabelScaleFactor:(unsigned char)arg1;
- (void)setLocalizeLabels:(BOOL)arg1;
- (void)setShowsBuildings:(BOOL)arg1;
- (void)setShowsPointsOfInterest:(BOOL)arg1;
- (BOOL)showsBuildings;
- (BOOL)showsPointsOfInterest;

@end
