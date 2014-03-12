#ifndef __TILE_TABS_CONFIGURATION_H__
#define __TILE_TABS_CONFIGURATION_H__

/*LICENSE_START*/
/*
 * Copyright 2013 Washington University,
 * All rights reserved.
 *
 * Connectome DB and Connectome Workbench are part of the integrated Connectome 
 * Informatics Platform.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *    * Redistributions of source code must retain the above copyright
 *      notice, this list of conditions and the following disclaimer.
 *    * Redistributions in binary form must reproduce the above copyright
 *      notice, this list of conditions and the following disclaimer in the
 *      documentation and/or other materials provided with the distribution.
 *    * Neither the names of Washington University nor the
 *      names of its contributors may be used to endorse or promote products
 *      derived from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE 
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR  
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF 
 * SUBSTITUTE GOODS OR  SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN 
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) 
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE 
 * POSSIBILITY OF SUCH DAMAGE.
 */
/*LICENSE_END*/

#include "CaretException.h"
#include "CaretObject.h"

class QDomDocument;


namespace caret {

    class TileTabsConfiguration : public CaretObject {
        
    public:
        TileTabsConfiguration();
        
        virtual ~TileTabsConfiguration();
        
        TileTabsConfiguration(const TileTabsConfiguration& obj);

        TileTabsConfiguration& operator=(const TileTabsConfiguration& obj);
        
        AString getName() const;
        
        void setName(const AString& name);
        
        AString getUniqueIdentifier() const;
        
        int32_t getNumberOfRows() const;
        
        void setNumberOfRows(const int32_t numberOfRows);
        
        int32_t getNumberOfColumns() const;

        void setNumberOfColumns(const int32_t numberOfColumns);
        
        float getColumnStretchFactor(const int32_t columnIndex) const;

        void setColumnStretchFactor(const int32_t columnIndex,
                                    const float stretchFactor);
        
        float getRowStretchFactor(const int32_t rowIndex) const;
        
        void setRowStretchFactor(const int32_t rowIndex,
                                 const float stretchFactor);
        
        bool isDefaultConfiguration() const;
        
        void setDefaultConfiguration(const bool defaultConfiguration);
        
        AString encodeInXML() const;
        
        bool decodeFromXML(const AString& xmlString);
        
        static bool lessThanComparisonByName(const TileTabsConfiguration* ttc1,
                                             const TileTabsConfiguration* ttc2);
        
        /**
         * @return Maximum number of rows in a tile tabs configuration
         */
        static inline int32_t getMaximumNumberOfRows() { return 20; }
        
        /**
         * @return Maximum number of columns in a tile tabs configuration
         */
        static inline int32_t getMaximumNumberOfColumns() { return 20; }
        
        void updateDefaultConfigurationRowsAndColumns(const int32_t numberOfTabs);
        
        // ADD_NEW_METHODS_HERE
        
        
    private:
        void copyHelperTileTabsConfiguration(const TileTabsConfiguration& obj);

        void parseVersionOneXML(QDomDocument& doc) throw (CaretException);
        
        void initialize();
        
        // ADD_NEW_MEMBERS_HERE
        
        AString m_name;
        
        bool m_defaultConfigurationFlag;
        
        /** Unique identifier does not get copied */
        AString m_uniqueIdentifier;
        
        int32_t m_numberOfRows;
        
        int32_t m_numberOfColumns;
        
        std::vector<float> m_rowStretchFactors;
        
        std::vector<float> m_columnStretchFactors;

        static const AString s_rootTagName;
        static const AString s_versionTagName;
        static const AString s_nameTagName;
        static const AString s_uniqueIdentifierTagName;
        static const AString s_versionNumberAttributeName;
        static const AString s_columnStretchFactorsTagName;
        static const AString s_columnStretchFactorsSelectedCountAttributeName;
        static const AString s_columnStretchFactorsTotalCountAttributeName;
        static const AString s_rowStretchFactorsTagName;
        static const AString s_rowStretchFactorsSelectedCountAttributeName;
        static const AString s_rowStretchFactorsTotalCountAttributeName;
        
    };
    
#ifdef __TILE_TABS_CONFIGURATION_DECLARE__
    const AString TileTabsConfiguration::s_rootTagName = "TileTabsConfiguration";
    const AString TileTabsConfiguration::s_versionTagName = "Version";
    const AString TileTabsConfiguration::s_versionNumberAttributeName = "Number";
    const AString TileTabsConfiguration::s_nameTagName = "Name";
    const AString TileTabsConfiguration::s_uniqueIdentifierTagName = "UniqueIdentifier";
    const AString TileTabsConfiguration::s_columnStretchFactorsTagName = "ColumnStretchFactors";
    const AString TileTabsConfiguration::s_columnStretchFactorsSelectedCountAttributeName = "SelectedRowCount";
    const AString TileTabsConfiguration::s_columnStretchFactorsTotalCountAttributeName = "TotalRowCount";
    const AString TileTabsConfiguration::s_rowStretchFactorsTagName = "RowStretchFactors";
    const AString TileTabsConfiguration::s_rowStretchFactorsSelectedCountAttributeName = "SelectedColumnCount";
    const AString TileTabsConfiguration::s_rowStretchFactorsTotalCountAttributeName = "TotalColumnCount";
#endif // __TILE_TABS_CONFIGURATION_DECLARE__

} // namespace
#endif  //__TILE_TABS_CONFIGURATION_H__
